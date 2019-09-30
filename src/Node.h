#ifndef __NODE_H__
#define __NODE_H__

#include <list>
#include <memory>

template< class T >
class Node
{
public:
  typedef std::unique_ptr< Node< T > > NodePtr;

  Node();
  Node( const T& val );
  ~Node() = default;
  
  const T& datum();
  void datum(T datum);
  const std::list< NodePtr >& sons();

  void clearSons();
  void insertSon( const T& val );
  void eraseSon( const T& val );
  
  unsigned int heigth();

private:
  std::unique_ptr< T > datum;
  std::list< NodePtr > sons;

  NodePtr searchSon( const T& val );
};

#include "Node.hxx"

#endif