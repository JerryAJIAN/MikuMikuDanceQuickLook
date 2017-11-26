// Generated by Apple Swift version 4.0.2 (swiftlang-900.0.69.2 clang-900.0.38)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import SceneKit;
@import Foundation;
@import QuartzCore;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("MMDSceneKit_macOS")

SWIFT_CLASS("_TtC17MMDSceneKit_macOS9DummyNode")
@interface DummyNode : NSObject
- (id _Nullable)valueForUndefinedKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SCNPhysicsBehavior;
@class SCNMaterial;
@class SCNGeometryElement;
@class NSValue;
@class MMDFloat;
@class SCNMorpher;
@class SCNAnimation;
@class NSCoder;
@class CAAnimation;
@class CAAnimationGroup;
@protocol SCNAnimation;
@class SCNScene;

SWIFT_CLASS("_TtC17MMDSceneKit_macOS7MMDNode")
@interface MMDNode : SCNNode <SCNProgramDelegate>
@property (nonatomic, readonly, copy) NSArray<SCNPhysicsBehavior *> * _Null_unspecified physicsBehaviors;
@property (nonatomic, readonly) BOOL isKnee;
@property (nonatomic, copy) NSArray<SCNPhysicsBehavior *> * _Nullable joints;
@property (nonatomic) NSInteger vertexCount;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified vertexArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified normalArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified texcoordArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified boneIndicesArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified boneWeightsArray;
@property (nonatomic) NSInteger indexCount;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified indexArray;
@property (nonatomic) NSInteger materialCount;
@property (nonatomic, copy) NSArray<SCNMaterial *> * _Null_unspecified materialArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified materialIndexCountArray;
@property (nonatomic, copy) NSArray<SCNGeometryElement *> * _Nullable elementArray;
@property (nonatomic, copy) NSArray<MMDNode *> * _Null_unspecified boneArray;
@property (nonatomic, copy) NSArray<NSValue *> * _Null_unspecified boneInverseMatrixArray;
@property (nonatomic, strong) MMDNode * _Null_unspecified rootBone;
@property (nonatomic, strong) MMDNode * _Nullable rotateEffector;
@property (nonatomic) float rotateEffectRate;
@property (nonatomic, strong) MMDNode * _Nullable translateEffector;
@property (nonatomic) float translateEffectRate;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable faceIndexArray;
@property (nonatomic, copy) NSArray<NSArray<NSNumber *> *> * _Nullable faceDataArray;
@property (nonatomic, copy) NSArray<MMDFloat *> * _Null_unspecified faceWeights;
@property (nonatomic, strong) SCNMorpher * _Null_unspecified geometryMorpher;
@property (nonatomic, copy) NSDictionary<NSString *, SCNAnimation *> * _Nullable preparedAnimation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (MMDNode * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
- (void)updateFace;
- (void)updateVertexData;
- (id _Nullable)valueForUndefinedKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setValue:(id _Nullable)value forUndefinedKey:(NSString * _Nonnull)key;
- (void)prepareAnimation:(CAAnimation * _Nonnull)animation forKey:(NSString * _Nonnull)key;
- (void)playPreparedAnimationForKey:(NSString * _Nonnull)key;
- (CAAnimationGroup * _Nonnull)convertAnimation:(CAAnimationGroup * _Nonnull)animation SWIFT_WARN_UNUSED_RESULT;
- (void)addAnimation:(id <SCNAnimation> _Nonnull)animation forKey:(NSString * _Nullable)key;
/// update IK bone
- (void)updateIK;
- (void)updateEffector;
- (void)addPhysicsBehaviorWithScene:(SCNScene * _Nonnull)scene;
- (void)removePhysicsBehaviorWithScene:(SCNScene * _Nonnull)scene;
- (SCNNode * _Nonnull)getRootNode SWIFT_WARN_UNUSED_RESULT;
- (SCNVector4)rotationToQuat:(SCNVector4)rot SWIFT_WARN_UNUSED_RESULT;
- (SCNVector4)quatToRotation:(SCNVector4)quat SWIFT_WARN_UNUSED_RESULT;
@end

@class SCNCamera;

SWIFT_CLASS("_TtC17MMDSceneKit_macOS13MMDCameraNode")
@interface MMDCameraNode : MMDNode
@property (nonatomic) float rotX;
@property (nonatomic) float rotY;
@property (nonatomic) float rotZ;
@property (nonatomic) float distance;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (SCNNode * _Nonnull)getCameraNode SWIFT_WARN_UNUSED_RESULT;
- (SCNCamera * _Nonnull)getCamera SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC17MMDSceneKit_macOS8MMDFloat")
@interface MMDFloat : NSObject
@property (nonatomic) float value SWIFT_DEPRECATED_OBJC("Swift property 'MMDFloat.value' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol SCNSceneRenderer;

SWIFT_CLASS("_TtC17MMDSceneKit_macOS15MMDIKController")
@interface MMDIKController : NSObject <SCNSceneRendererDelegate>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MMDIKController * _Nonnull sharedController;)
+ (MMDIKController * _Nonnull)sharedController SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/// update IK constraint for the given renderer
+ (void)updateIKWithRenderer:(id <SCNSceneRenderer> _Nonnull)renderer;
/// apply IK constraint recursively
+ (void)applyIKRecursive:(SCNNode * _Nonnull)node;
/// apply IK constraint after animations are applied
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didApplyAnimationsAtTime:(NSTimeInterval)time;
@end


@protocol SCNAnimatable;

@interface MMDNode (SWIFT_EXTENSION(MMDSceneKit_macOS)) <CAAnimationDelegate>
- (void)setCompletionHandler:(void (^ _Nonnull)(SCNAnimation * _Nonnull, id <SCNAnimatable> _Nonnull, BOOL))block forPreparedAnimationKey:(NSString * _Nonnull)key;
@end


SWIFT_CLASS("_TtC17MMDSceneKit_macOS10MMDProgram")
@interface MMDProgram : SCNProgram <SCNProgramDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17MMDSceneKit_macOS14MMDSceneSource")
@interface MMDSceneSource : SCNSceneSource
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes a scene source for reading the scene graph contained in an NSData object.
/// \param data A data object containing a scene file in MMD file format.
///
/// \param options ignored. just for compatibility of SCNSceneSource.
///
- (nullable instancetype)initWithData:(NSData * _Nonnull)data options:(NSDictionary<SCNSceneSourceLoadingOption, id> * _Nullable)options;
/// Initializes a scene source for reading the scene graph from a specified file.
/// \param url A URL identifying the location of a scene file in MMD file format.
///
/// \param options ignored. just for compatibility of SCNSceneSource.
///
- (nullable instancetype)initWithURL:(NSURL * _Nonnull)url options:(NSDictionary<SCNSceneSourceLoadingOption, id> * _Nullable)options;
/// Initializes a scene source for reading the scene graph from a specified file.
/// \param path A path identifying the location of a scene file in MMD file format.
///
/// \param options ignored. just for compatibility of SCNSceneSource.
///
- (nullable instancetype)initWithPath:(NSString * _Nonnull)path options:(NSDictionary<SCNSceneSourceLoadingOption, id> * _Nullable)options models:(NSArray<MMDNode *> * _Nullable)models motions:(NSArray<CAAnimation *> * _Nullable)motions;
/// Initializes a scene source for reading the scene graph from a specified file.
/// \param named A URL identifying the location of a scene file in MMD file format.
///
/// \param options ignored.
///
- (nullable instancetype)initWithNamed:(NSString * _Nonnull)name options:(NSDictionary<SCNSceneSourceLoadingOption, id> * _Nullable)options models:(NSArray<MMDNode *> * _Nullable)models;
/// Return an array of MMDNode objects which represent model node
- (NSArray<MMDNode *> * _Null_unspecified)modelNodes SWIFT_WARN_UNUSED_RESULT;
- (NSArray<MMDNode *> * _Null_unspecified)cameraNodes SWIFT_WARN_UNUSED_RESULT;
- (NSArray<MMDNode *> * _Null_unspecified)lightNodes SWIFT_WARN_UNUSED_RESULT;
- (SCNScene * _Nullable)getScene SWIFT_WARN_UNUSED_RESULT;
- (MMDNode * _Nullable)getModel SWIFT_WARN_UNUSED_RESULT;
/// Return a hash of CAAnimationGroup
- (NSDictionary<NSString *, CAAnimationGroup *> * _Null_unspecified)animations SWIFT_WARN_UNUSED_RESULT;
- (CAAnimationGroup * _Nullable)getMotion SWIFT_WARN_UNUSED_RESULT;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop