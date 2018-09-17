cmake_minimum_required(VERSION 3.12)
project(HW5a)

set(CMAKE_CXX_STANDARD 14)

add_executable(main.cpp Base.cpp Base.h dPublic.h dPublic.cpp dProt.h dProt.cpp dPriv.h dPriv.cpp PublicDerived.h PublicDerived.cpp ProtDerived.h ProtDerived.cpp PrivDerived.h PrivDerived.cpp )