#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Khtf_iosapp_fwSummator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface Khtf_iosapp_fwMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface Khtf_iosapp_fwMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface Khtf_iosapp_fwNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface Khtf_iosapp_fwByte : Khtf_iosapp_fwNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface Khtf_iosapp_fwUByte : Khtf_iosapp_fwNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface Khtf_iosapp_fwShort : Khtf_iosapp_fwNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface Khtf_iosapp_fwUShort : Khtf_iosapp_fwNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface Khtf_iosapp_fwInt : Khtf_iosapp_fwNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface Khtf_iosapp_fwUInt : Khtf_iosapp_fwNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface Khtf_iosapp_fwLong : Khtf_iosapp_fwNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface Khtf_iosapp_fwULong : Khtf_iosapp_fwNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface Khtf_iosapp_fwFloat : Khtf_iosapp_fwNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface Khtf_iosapp_fwDouble : Khtf_iosapp_fwNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface Khtf_iosapp_fwBoolean : Khtf_iosapp_fwNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummatorFw")))
@interface Khtf_iosapp_fwSummatorFw : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)sumA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum(a:b:)")));
- (int32_t)sumAA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sumA(a:b:)")));
- (int32_t)sumA2A:(int32_t)a b:(int32_t)b __attribute__((swift_name("sumA2(a:b:)")));
- (int32_t)sumCA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sumC(a:b:)")));
- (Khtf_iosapp_fwSummator *)getSummatorC __attribute__((swift_name("getSummatorC()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summator_")))
@interface Khtf_iosapp_fwSummator_ : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)sumA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum(a:b:)")));
- (int32_t)sum2A:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum2(a:b:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summator")))
@interface Khtf_iosapp_fwSummator : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)sumA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum(a:b:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibFCase")))
@interface Khtf_iosapp_fwLibFCase : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doSomething __attribute__((swift_name("doSomething()")));
- (NSString *)getContent __attribute__((swift_name("getContent()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibGCase")))
@interface Khtf_iosapp_fwLibGCase : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doSomething1 __attribute__((swift_name("doSomething1()")));
- (void)doSomething2 __attribute__((swift_name("doSomething2()")));
- (NSString *)getContent __attribute__((swift_name("getContent()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summator__")))
@interface Khtf_iosapp_fwSummator__ : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Summator__.Companion")))
@interface Khtf_iosapp_fwSummator__Companion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (int32_t)sumA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum(a:b:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecoratorService")))
@interface Khtf_iosapp_fwDecoratorService : KotlinBase
- (instancetype)initWithSuffix:(NSString *)suffix __attribute__((swift_name("init(suffix:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getLastValue __attribute__((swift_name("getLastValue()")));
- (NSString *)getSize __attribute__((swift_name("getSize()")));
- (NSString *)getString __attribute__((swift_name("getString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IndependentService")))
@interface Khtf_iosapp_fwIndependentService : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)formatS:(NSString *)s __attribute__((swift_name("format(s:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibEntryPoint1")))
@interface Khtf_iosapp_fwLibEntryPoint1 : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addValueValue:(NSString *)value __attribute__((swift_name("addValue(value:)")));
- (NSString *)getString __attribute__((swift_name("getString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibEntryPoint2")))
@interface Khtf_iosapp_fwLibEntryPoint2 : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addValue1Value:(NSString *)value __attribute__((swift_name("addValue1(value:)")));
- (void)addValue2Value:(NSString *)value __attribute__((swift_name("addValue2(value:)")));
- (NSString *)getString __attribute__((swift_name("getString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryServiceFactoryKt")))
@interface Khtf_iosapp_fwHistoryServiceFactoryKt : KotlinBase
+ (void)setDefaultHistoryServiceDataInitialValue:(NSString *)initialValue __attribute__((swift_name("setDefaultHistoryServiceData(initialValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModificationServiceFactoryKt")))
@interface Khtf_iosapp_fwModificationServiceFactoryKt : KotlinBase
+ (void)setDefaultModificationServiceDataMod1:(NSString *)mod1 mod2:(NSString *)mod2 __attribute__((swift_name("setDefaultModificationServiceData(mod1:mod2:)")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
