#include "chipmunk_private.h"

CP_EXPORT void cpArbiterGetShapes_NOSWAP(const cpArbiter *arb, cpShape **a, cpShape **b, cpBool swapped);

CP_EXPORT void cpArbiterGetBodies_NOSWAP(const cpArbiter *arb, cpBody **a, cpBody **b, cpBool swapped);

CP_EXPORT cpVect cpArbiterGetSurfaceVelocity_NOSWAP(cpArbiter *arb, cpBool swapped);

CP_EXPORT void cpArbiterSetSurfaceVelocity_NOSWAP(cpArbiter *arb, cpVect vr, cpBool swapped);

CP_EXPORT cpVect cpArbiterTotalImpulse_NOSWAP(const cpArbiter *arb, cpBool swapped);

CP_EXPORT cpContactPointSet cpArbiterGetContactPointSet_NOSWAP(const cpArbiter *arb, cpBool swapped);

CP_EXPORT void cpArbiterSetContactPointSet_NOSWAP(cpArbiter *arb, cpContactPointSet *set, cpBool swapped);



CP_EXPORT cpConstraint * cpBodyConstraintList(cpBody *body);

CP_EXPORT cpConstraint * cpBodyNextConstraint(cpConstraint *node, cpBody *body);

CP_EXPORT cpArbiter * cpBodyArbiterList(cpBody *body);

CP_EXPORT cpArbiter * cpBodyNextArbiter(cpArbiter *node, cpBody *body);

CP_EXPORT cpShape * cpBodyShapeList(cpBody *body);

CP_EXPORT cpShape * cpBodyNextShape(cpShape *node);



CP_EXPORT void cpSpacePointQuery_NOLOCK(cpSpace *space, cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpSpacePointQueryFunc func, void *data);

CP_EXPORT void cpSpaceSegmentQuery_NOLOCK(cpSpace *space, cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSpaceSegmentQueryFunc func, void *data);

CP_EXPORT void cpSpaceBBQuery_NOLOCK(cpSpace *space, cpBB bb, cpShapeFilter filter, cpSpaceBBQueryFunc func, void *data);

CP_EXPORT cpBool cpSpaceShapeQuery_NOLOCK(cpSpace *space, cpShape *shape, cpSpaceShapeQueryFunc func, void *data);
