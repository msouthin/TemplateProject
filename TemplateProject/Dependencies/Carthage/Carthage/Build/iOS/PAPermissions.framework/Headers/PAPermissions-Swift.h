// Generated by Apple Swift version 3.0 (swiftlang-800.0.46.2 clang-800.0.38)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import CoreBluetooth;
@import CoreLocation;
@import UIKit;
@import UserNotifications;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC13PAPermissions18PAPermissionsCheck")
@interface PAPermissionsCheck : NSObject
@property (nonatomic) BOOL canBeDisabled;
- (void)checkStatus;
- (void)defaultAction;
- (void)updateStatus;
- (void)openSettings;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions20PAABAddressBookCheck")
@interface PAABAddressBookCheck : PAPermissionsCheck
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CBCentralManager;

SWIFT_CLASS("_TtC13PAPermissions27PABluetoothPermissionsCheck")
@interface PABluetoothPermissionsCheck : PAPermissionsCheck <CBCentralManagerDelegate>
- (void)checkStatus;
- (void)defaultAction;
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions28PACNContactsPermissionsCheck")
@interface PACNContactsPermissionsCheck : PAPermissionsCheck
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions20PAEKPermissionsCheck")
@interface PAEKPermissionsCheck : PAPermissionsCheck
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions26PACalendarPermissionsCheck")
@interface PACalendarPermissionsCheck : PAEKPermissionsCheck
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions24PACameraPermissionsCheck")
@interface PACameraPermissionsCheck : PAPermissionsCheck
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class CLLocationManager;

SWIFT_CLASS("_TtC13PAPermissions26PALocationPermissionsCheck")
@interface PALocationPermissionsCheck : PAPermissionsCheck <CLLocationManagerDelegate>
- (void)checkStatus;
- (void)defaultAction;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions28PAMicrophonePermissionsCheck")
@interface PAMicrophonePermissionsCheck : PAPermissionsCheck
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions31PAMotionFitnessPermissionsCheck")
@interface PAMotionFitnessPermissionsCheck : PAPermissionsCheck
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIMutableUserNotificationCategory;

SWIFT_CLASS("_TtC13PAPermissions31PANotificationsPermissionsCheck")
@interface PANotificationsPermissionsCheck : PAPermissionsCheck
@property (nonatomic, copy) NSSet<UIMutableUserNotificationCategory *> * _Nullable categories;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)checkStatus;
- (void)defaultAction;
@end


@class UIColor;
@class UIImage;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC13PAPermissions27PAPermissionsViewController")
@interface PAPermissionsViewController : UIViewController
@property (nonatomic, copy) NSString * _Nullable titleText;
@property (nonatomic, copy) NSString * _Nullable detailsText;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
@property (nonatomic, strong) UIColor * _Null_unspecified backgroundColor;
@property (nonatomic, strong) UIImage * _Nullable backgroundImage;
@property (nonatomic) BOOL useBlurBackground;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions30PAPhotoLibraryPermissionsCheck")
@interface PAPhotoLibraryPermissionsCheck : PAPermissionsCheck
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PAPermissions27PARemindersPermissionsCheck")
@interface PARemindersPermissionsCheck : PAEKPermissionsCheck
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNUserNotificationCenter;

SWIFT_CLASS("_TtC13PAPermissions32PAUNNotificationPermissionsCheck")
@interface PAUNNotificationPermissionsCheck : PAPermissionsCheck
@property (nonatomic, readonly, strong) UNUserNotificationCenter * _Nonnull notificationCenter;
@property (nonatomic) UNAuthorizationStatus authorizationStatus;
- (void)checkStatus;
- (void)defaultAction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop