#include "FastSimulation/Particle/interface/ParticleTable.h"

thread_local ParticleTable* ParticleTable::myself = new ParticleTable(nullptr);

