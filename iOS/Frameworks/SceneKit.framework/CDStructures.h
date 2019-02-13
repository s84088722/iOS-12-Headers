//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableSet;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAudio3DPoint {
    float _field1;
    float _field2;
    float _field3;
};

struct C3DColor4 {
    union {
        float _field1[4];
        CDStruct_cdc14ebe _field2;
    } _field1;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct InplaceSolverIslandCallback;

struct SCNCAction {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
};

struct SCNCActionCustom {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    CDUnknownBlockType _field20;
};

struct SCNCActionFade {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    float _field20;
    float _field21;
    float _field22;
    _Bool _field23;
};

struct SCNCActionHide {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    _Bool _field20;
};

struct SCNCActionMove {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    double _field20;
    _Bool _field21;
    _Bool _field22;
};

struct SCNCActionRepeat {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    struct SCNCAction *_field20;
    unsigned long long _field21;
    unsigned long long _field22;
    double _field23;
    _Bool _field24;
};

struct SCNCActionRotate {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    float _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
};

struct SCNCActionScale {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    _Bool _field25;
    _Bool _field26;
};

struct SCNCActionSequence {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    struct vector<SCNCAction *, std::__1::allocator<SCNCAction *>> _field20;
    unsigned long long _field21;
    double _field22;
};

struct SCNCActionWait {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
};

struct SCNCPlaySound {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    long long _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    _Bool _field20;
    _Bool _field21;
    id _field22;
};

struct SCNMatrix4 {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct SCNVector3 {
    float x;
    float y;
    float z;
};

struct SCNVector4 {
    float x;
    float y;
    float z;
    float w;
};

struct SkelNodesMap {
    struct map<MDLSkeleton *, (anonymous namespace)::SkelNodes, std::__1::less<MDLSkeleton *>, std::__1::allocator<std::__1::pair<MDLSkeleton *const, (anonymous namespace)::SkelNodes>>> _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __C3DFramebuffer;

struct __C3DImage;

struct __CFString;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct btActionInterface;

struct btAlignedAllocator<btActionInterface *, 16>;

struct btAlignedAllocator<btCollisionObject *, 16>;

struct btAlignedAllocator<btPersistentManifold *, 16>;

struct btAlignedAllocator<btRigidBody *, 16>;

struct btAlignedAllocator<btTypedConstraint *, 16>;

struct btAlignedAllocator<btVector3, 16>;

struct btAlignedAllocator<btWheelInfo, 16>;

struct btAlignedAllocator<float, 16>;

struct btAlignedObjectArray<btActionInterface *> {
    struct btAlignedAllocator<btActionInterface *, 16> _field1;
    int _field2;
    int _field3;
    struct btActionInterface **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btCollisionObject *> {
    struct btAlignedAllocator<btCollisionObject *, 16> _field1;
    int _field2;
    int _field3;
    struct btCollisionObject **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btPersistentManifold *> {
    struct btAlignedAllocator<btPersistentManifold *, 16> _field1;
    int _field2;
    int _field3;
    struct btPersistentManifold **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btRigidBody *> {
    struct btAlignedAllocator<btRigidBody *, 16> _field1;
    int _field2;
    int _field3;
    struct btRigidBody **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btTypedConstraint *> {
    struct btAlignedAllocator<btTypedConstraint *, 16> _field1;
    int _field2;
    int _field3;
    struct btTypedConstraint **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btVector3> {
    struct btAlignedAllocator<btVector3, 16> _field1;
    int _field2;
    int _field3;
    struct btVector3 *_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btWheelInfo> {
    struct btAlignedAllocator<btWheelInfo, 16> _field1;
    int _field2;
    int _field3;
    struct btWheelInfo *_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<float> {
    struct btAlignedAllocator<float, 16> _field1;
    int _field2;
    int _field3;
    float *_field4;
    _Bool _field5;
};

struct btAngularLimit {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    _Bool _field8;
};

struct btBroadphaseInterface;

struct btBroadphaseProxy;

struct btC3DDebugDraw {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
};

struct btCapsuleShape {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    float _field6;
    float _field7;
    int _field8;
};

struct btCharacterControllerInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct btCollisionObject;

struct btCollisionShape {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
};

struct btConeTwistConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    struct btJacobianEntry _field14[3];
    struct btTransform _field15;
    struct btTransform _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    struct btVector3 _field25;
    struct btVector3 _field26;
    float _field27;
    float _field28;
    float _field29;
    float _field30;
    float _field31;
    float _field32;
    float _field33;
    float _field34;
    _Bool _field35;
    _Bool _field36;
    _Bool _field37;
    _Bool _field38;
    float _field39;
    float _field40;
    struct btVector3 _field41;
    _Bool _field42;
    _Bool _field43;
    struct btQuaternion _field44;
    float _field45;
    struct btVector3 _field46;
    int _field47;
    float _field48;
    float _field49;
    float _field50;
};

struct btConstraintSetting {
    float _field1;
    float _field2;
    float _field3;
};

struct btConstraintSolver;

struct btContactSolverInfo {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    int _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    int _field17;
    int _field18;
    int _field19;
    float _field20;
    float _field21;
};

struct btDiscreteDynamicsWorld {
    CDUnknownFunctionPointerType *_field1;
    struct btAlignedObjectArray<btCollisionObject *> _field2;
    struct btDispatcher *_field3;
    struct btDispatcherInfo _field4;
    struct btBroadphaseInterface *_field5;
    struct btIDebugDraw *_field6;
    _Bool _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    void *_field10;
    struct btContactSolverInfo _field11;
    float _field12;
    struct btAlignedObjectArray<btTypedConstraint *> _field13;
    struct InplaceSolverIslandCallback *_field14;
    struct btConstraintSolver *_field15;
    struct btSimulationIslandManager *_field16;
    struct btAlignedObjectArray<btTypedConstraint *> _field17;
    struct btAlignedObjectArray<btRigidBody *> _field18;
    struct btVector3 _field19;
    float _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    struct btAlignedObjectArray<btActionInterface *> _field25;
    int _field26;
    struct btAlignedObjectArray<btPersistentManifold *> _field27;
    _Bool _field28;
};

struct btDispatcher;

struct btDispatcherInfo {
    float _field1;
    int _field2;
    int _field3;
    float _field4;
    _Bool _field5;
    struct btIDebugDraw *_field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    float _field10;
    _Bool _field11;
    float _field12;
};

struct btDynamicsWorld {
    CDUnknownFunctionPointerType *_field1;
    struct btAlignedObjectArray<btCollisionObject *> _field2;
    struct btDispatcher *_field3;
    struct btDispatcherInfo _field4;
    struct btBroadphaseInterface *_field5;
    struct btIDebugDraw *_field6;
    _Bool _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    void *_field10;
    struct btContactSolverInfo _field11;
    float _field12;
};

struct btHashedOverlappingPairCache;

struct btHingeConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    struct btJacobianEntry _field14[3];
    struct btJacobianEntry _field15[3];
    struct btTransform _field16;
    struct btTransform _field17;
    float _field18;
    float _field19;
    struct btAngularLimit _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    float _field30;
    int _field31;
    float _field32;
    float _field33;
    float _field34;
};

struct btIDebugDraw;

struct btJacobianEntry {
    struct btVector3 _field1;
    struct btVector3 _field2;
    struct btVector3 _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    float _field6;
};

struct btJointFeedback;

struct btManifoldPoint {
    struct btVector3 _field1;
    struct btVector3 _field2;
    struct btVector3 _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    void *_field14;
    _Bool _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    int _field23;
    struct btVector3 _field24;
    struct btVector3 _field25;
};

struct btMatrix3x3 {
    struct btVector3 _field1[3];
};

struct btMotionState;

struct btOverlapFilterCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct btOverlappingPairCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct btPairCachingGhostObject {
    CDUnknownFunctionPointerType *_field1;
    struct btTransform _field2;
    struct btTransform _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    struct btVector3 _field6;
    int _field7;
    float _field8;
    struct btBroadphaseProxy *_field9;
    struct btCollisionShape *_field10;
    void *_field11;
    struct btCollisionShape *_field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    int _field21;
    void *_field22;
    float _field23;
    float _field24;
    float _field25;
    int _field26;
    struct btAlignedObjectArray<btCollisionObject *> _field27;
    struct btHashedOverlappingPairCache *_field28;
};

struct btPersistentManifold {
    int _field1;
    struct btManifoldPoint _field2[4];
    struct btCollisionObject *_field3;
    struct btCollisionObject *_field4;
    int _field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
    int _field10;
    struct c3dContactCallback *_field11;
};

struct btPoint2PointConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    struct btJacobianEntry _field14[3];
    struct btVector3 _field15;
    struct btVector3 _field16;
    int _field17;
    float _field18;
    float _field19;
    _Bool _field20;
    struct btConstraintSetting _field21;
};

struct btQuaternion {
    CDUnion_bc1bcd03 _field1;
};

struct btRaycastVehicle {
    CDUnknownFunctionPointerType *_field1;
    struct btAlignedObjectArray<btVector3> _field2;
    struct btAlignedObjectArray<btVector3> _field3;
    struct btAlignedObjectArray<float> _field4;
    struct btAlignedObjectArray<float> _field5;
    int _field6;
    int _field7;
    float _field8;
    float _field9;
    struct btVehicleRaycaster *_field10;
    float _field11;
    float _field12;
    float _field13;
    struct btRigidBody *_field14;
    int _field15;
    int _field16;
    int _field17;
    struct btAlignedObjectArray<btWheelInfo> _field18;
};

struct btRigidBody {
    CDUnknownFunctionPointerType *_field1;
    struct btTransform _field2;
    struct btTransform _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    struct btVector3 _field6;
    int _field7;
    float _field8;
    struct btBroadphaseProxy *_field9;
    struct btCollisionShape *_field10;
    void *_field11;
    struct btCollisionShape *_field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    int _field21;
    void *_field22;
    float _field23;
    float _field24;
    float _field25;
    int _field26;
    struct btMatrix3x3 _field27;
    struct btVector3 _field28;
    struct btVector3 _field29;
    float _field30;
    struct btVector3 _field31;
    struct btVector3 _field32;
    struct btVector3 _field33;
    struct btVector3 _field34;
    struct btVector3 _field35;
    struct btVector3 _field36;
    float _field37;
    float _field38;
    _Bool _field39;
    float _field40;
    float _field41;
    float _field42;
    float _field43;
    float _field44;
    float _field45;
    float _field46;
    struct btMotionState *_field47;
    struct btAlignedObjectArray<btTypedConstraint *> _field48;
    int _field49;
    int _field50;
    struct btVector3 _field51;
    struct btVector3 _field52;
    struct btVector3 _field53;
    struct btVector3 _field54;
    struct btVector3 _field55;
    struct btVector3 _field56;
    int _field57;
    int _field58;
};

struct btSimulationIslandManager;

struct btSliderConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    _Bool _field14;
    _Bool _field15;
    struct btTransform _field16;
    struct btTransform _field17;
    _Bool _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    float _field28;
    float _field29;
    float _field30;
    float _field31;
    float _field32;
    float _field33;
    float _field34;
    float _field35;
    float _field36;
    float _field37;
    float _field38;
    float _field39;
    float _field40;
    float _field41;
    float _field42;
    float _field43;
    float _field44;
    float _field45;
    float _field46;
    _Bool _field47;
    _Bool _field48;
    int _field49;
    struct btJacobianEntry _field50[3];
    float _field51[3];
    struct btJacobianEntry _field52[3];
    float _field53;
    struct btTransform _field54;
    struct btTransform _field55;
    struct btVector3 _field56;
    struct btVector3 _field57;
    struct btVector3 _field58;
    struct btVector3 _field59;
    struct btVector3 _field60;
    struct btVector3 _field61;
    struct btVector3 _field62;
    struct btVector3 _field63;
    float _field64;
    float _field65;
    float _field66;
    float _field67;
    _Bool _field68;
    float _field69;
    float _field70;
    float _field71;
    _Bool _field72;
    float _field73;
    float _field74;
    float _field75;
};

struct btTransform {
    struct btMatrix3x3 _field1;
    struct btVector3 _field2;
};

struct btTypedConstraint;

struct btVector3 {
    CDUnion_bc1bcd03 _field1;
};

struct btVehicleRaycaster {
    CDUnknownFunctionPointerType *_field1;
};

struct btWheelInfo;

struct c3dAether {
    struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *>> _fields;
    struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *>> _activeFields;
    unsigned int _lastOverrideIndex;
};

struct c3dContactCallback;

struct c3dPhysicsField;

struct map<MDLSkeleton *, (anonymous namespace)::SkelNodes, std::__1::less<MDLSkeleton *>, std::__1::allocator<std::__1::pair<MDLSkeleton *const, (anonymous namespace)::SkelNodes>>> {
    struct __tree<std::__1::__value_type<MDLSkeleton *, (anonymous namespace)::SkelNodes>, std::__1::__map_value_compare<MDLSkeleton *, std::__1::__value_type<MDLSkeleton *, (anonymous namespace)::SkelNodes>, std::__1::less<MDLSkeleton *>, true>, std::__1::allocator<std::__1::__value_type<MDLSkeleton *, (anonymous namespace)::SkelNodes>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MDLSkeleton *, (anonymous namespace)::SkelNodes>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MDLSkeleton *, std::__1::__value_type<MDLSkeleton *, (anonymous namespace)::SkelNodes>, std::__1::less<MDLSkeleton *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short>> {
    struct __tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned short>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct vector<SCNCAction *, std::__1::allocator<SCNCAction *>> {
    struct SCNCAction **_field1;
    struct SCNCAction **_field2;
    struct __compressed_pair<SCNCAction **, std::__1::allocator<SCNCAction *>> {
        struct SCNCAction **_field1;
    } _field3;
};

struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *>> {
    struct c3dPhysicsField **__begin_;
    struct c3dPhysicsField **__end_;
    struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *>> {
        struct c3dPhysicsField **__value_;
    } __end_cap_;
};

struct vector<unsigned short, std::__1::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool enableVertexWeldingAtImport;
    unsigned char boundaryInterpolationRule;
    unsigned char faceVaryingInterpolationRule;
    unsigned char normalSmoothingMode;
} CDStruct_4c02ed10;

typedef struct {
    unsigned char format;
    unsigned char sampleCount;
    unsigned char textureUsage;
    unsigned int renderToTexture:1;
    unsigned int forceTextureRect:1;
    unsigned int viewportDependant:1;
    unsigned int renderToIOSurface:1;
    unsigned int mipmapped:1;
    unsigned int textureCube:1;
    unsigned char padding[4];
} CDStruct_ace98575;

typedef struct {
    unsigned int supportsUpdate:1;
    unsigned int supportsDidApplyAnimations:1;
    unsigned int supportsDidSimulatePhysics:1;
    unsigned int supportsDidApplyConstraints:1;
    unsigned int supportsWillRender:1;
    unsigned int supportsDidRender:1;
    unsigned int supportsInputTime:1;
    unsigned int supportsReadSubdivCache:1;
    unsigned int supportsWriteSubdivCache:1;
} CDStruct_f76d274b;

typedef struct {
    char _field1;
    double _field2;
    double _field3;
    int _field4;
    double _field5;
    void *_field6;
    void *_field7;
} CDStruct_d3ce6806;

typedef struct {
    float _field1;
    void *_field2;
    float _field3;
} CDStruct_962da47d;

typedef struct {
    float x;
    float y;
    float z;
    float radius;
} CDStruct_cdc14ebe;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    id _field1;
    id _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct SCNVector3 _field5;
    struct SCNVector3 _field6;
    double _field7;
} CDStruct_8affffdd;

typedef struct {
    struct __C3DFXProgram *weakProgram;
    unsigned int baseIndex;
    unsigned int baseVertex;
    unsigned int vertexSize;
    unsigned int allocatedVerticesSize;
    unsigned int allocatedIndicesSize;
    struct __C3DImage *textureImage;
    struct __C3DTexture *texture;
    unsigned int drawMode;
    _Bool orthographic;
    _Bool clearDepthBuffer;
    _Bool enableDepthTest;
    _Bool enableCulling;
    _Bool isDynamic;
    struct __C3DMesh *mesh;
    struct __C3DMeshElement *meshElement;
    struct {
        unsigned long long verticesStride;
        unsigned long long colorsStride;
        unsigned long long uvsStride;
        char *verticesData;
        char *colorsData;
        char *uvsData;
    } _cache;
    NSMutableSet *_usedMeshes;
    NSMutableSet *_freeMeshes;
    NSMutableSet *_usedMeshElements;
    NSMutableSet *_freeMeshElements;
} CDStruct_4aabc75a;

typedef struct {
    CDUnion_915c2b1f _field1[6];
} CDStruct_7841dd09;

typedef struct {
    struct {
        struct __C3DImage *texture;
        struct CGSize textureSize;
        _Bool isRetina;
    } textureInfo;
    double lineHeight;
    short characterWidth_texture;
    double *characterWidth_typography;
    short characterHeight_texture;
    struct *symbolRects;
} CDStruct_c23cf450;

typedef struct {
    CDStruct_d3ce6806 _field1;
    void *_field2;
    void *_field3;
    int _field4;
    int _field5;
    _Bool _field6;
    _Bool _field7;
    struct CGRect _field8;
    double _field9;
} CDStruct_8bd95810;

#pragma mark Typedef'd Unions

typedef union {
    float _field1[4];
} CDUnion_bc1bcd03;

typedef union {
    int _field1;
    void *_field2;
} CDUnion_15924c16;

typedef union {
    CDStruct_cdc14ebe vector__center__;
} CDUnion_915c2b1f;

