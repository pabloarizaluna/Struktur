#include "Node.h"

template< class T >
Node< T >::Node()
{
}

template< class T >
Node< T >::Node( const T& datum )
{
  this->datum = std::make_unique< T >(datum)
}

template< class T >
const T& Node< T >::datum()
{

}

template< class T >
void Node< T >::datum(T datum)
{

}

template< class T >
const std::list< typename Node< T >::NodePtr >& Node< T >::sons()
{

}

template< class T >
void Node< T >::clearSons()
{

}

template< class T >
void Node< T >::insertSon( const T& datum )
{

}

template< class T >
void Node< T >::eraseSon( typename Node< T >::NodePtr )
{

}

template< class T >  
unsigned int Node< T >::heigth()
{

}
