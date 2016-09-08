// Copyright information and license terms for this software can be
// found in the file LICENSE that is included with the distribution


#include "EndpointPy.h"
#include "RpcServiceImpl.h"


void EndpointPy::registerEndpointGet(const boost::python::object& pyGet)
{
    m_pyGet = pyGet;
}

void EndpointPy::registerEndpointPut(const boost::python::object& pyPut)
{
    m_pyPut = pyPut;
}

void EndpointPy::registerService(const boost::python::object& pyService)
{
    m_pyService = pyService;
    // TODO: set m_pyRPC to null
}

void EndpointPy::registerEndpointRPC(const boost::python::object& pyRPC)
{
    m_pyRPC = pyRPC;
    // TODO: set m_pyService to null
}


