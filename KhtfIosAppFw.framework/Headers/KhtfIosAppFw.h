#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Khtf_iosapp_fwSummator, Khtf_iosapp_fwColorProvider, Khtf_iosapp_fwKotlinEnum, Khtf_iosapp_fwContentEncoding, Khtf_iosapp_fwPathComponent, Khtf_iosapp_fwStatResult, Khtf_iosapp_fwPath, Khtf_iosapp_fwFileType, NSURL, Khtf_iosapp_fwKotlinStringCompanion, NSData, NSString;

@protocol Khtf_iosapp_fwKotlinComparable;

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
- (void)testFiles __attribute__((swift_name("testFiles()")));
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
__attribute__((swift_name("ColorProvider")))
@interface Khtf_iosapp_fwColorProvider : KotlinBase
- (instancetype)initWithValues:(NSDictionary<NSString *, NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getValKey:(NSString *)key __attribute__((swift_name("getVal(key:)")));
- (void)putValKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putVal(key:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorProviderFactory")))
@interface Khtf_iosapp_fwColorProviderFactory : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)colorProviderFactory __attribute__((swift_name("init()")));
@property (readonly) Khtf_iosapp_fwColorProvider *colorProvider __attribute__((swift_name("colorProvider")));
@property NSString *initialPathToFile __attribute__((swift_name("initialPathToFile")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformColorProvider")))
@interface Khtf_iosapp_fwPlatformColorProvider : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addPlatformSpecificColor __attribute__((swift_name("addPlatformSpecificColor()")));
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

__attribute__((swift_name("KotlinComparable")))
@protocol Khtf_iosapp_fwKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Khtf_iosapp_fwKotlinEnum : KotlinBase <Khtf_iosapp_fwKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(Khtf_iosapp_fwKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentEncoding")))
@interface Khtf_iosapp_fwContentEncoding : Khtf_iosapp_fwKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Khtf_iosapp_fwContentEncoding *utf8 __attribute__((swift_name("utf8")));
@property (class, readonly) Khtf_iosapp_fwContentEncoding *ascii __attribute__((swift_name("ascii")));
@property (class, readonly) Khtf_iosapp_fwContentEncoding *base64 __attribute__((swift_name("base64")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Khtf_iosapp_fwContentEncoding *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileSystem")))
@interface Khtf_iosapp_fwFileSystem : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fileSystem __attribute__((swift_name("init()")));
- (BOOL)appendFilePathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent contents:(NSString *)contents create:(BOOL)create encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("appendFile(pathComponent:contents:create:encoding:)")));
- (BOOL)appendFilePath:(NSString *)path contents:(NSString *)contents create:(BOOL)create encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("appendFile(path:contents:create:encoding:)")));
- (BOOL)doCopyFileSrcPathComponent:(Khtf_iosapp_fwPathComponent *)srcPathComponent destPathComponent:(Khtf_iosapp_fwPathComponent *)destPathComponent __attribute__((swift_name("doCopyFile(srcPathComponent:destPathComponent:)")));
- (BOOL)doCopyFileSrcPath:(NSString *)srcPath destPath:(NSString *)destPath __attribute__((swift_name("doCopyFile(srcPath:destPath:)")));
- (BOOL)existsPathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent __attribute__((swift_name("exists(pathComponent:)")));
- (BOOL)existsPath:(NSString *)path __attribute__((swift_name("exists(path:)")));
- (BOOL)mkdirPathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent recursive:(BOOL)recursive __attribute__((swift_name("mkdir(pathComponent:recursive:)")));
- (BOOL)mkdirPath:(NSString *)path recursive:(BOOL)recursive __attribute__((swift_name("mkdir(path:recursive:)")));
- (BOOL)moveFileSrcPathComponent:(Khtf_iosapp_fwPathComponent *)srcPathComponent destPathComponent:(Khtf_iosapp_fwPathComponent *)destPathComponent __attribute__((swift_name("moveFile(srcPathComponent:destPathComponent:)")));
- (BOOL)moveFileSrcPath:(NSString *)srcPath destPath:(NSString *)destPath __attribute__((swift_name("moveFile(srcPath:destPath:)")));
- (NSArray<Khtf_iosapp_fwStatResult *> * _Nullable)readDirPathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent __attribute__((swift_name("readDir(pathComponent:)")));
- (NSArray<Khtf_iosapp_fwStatResult *> * _Nullable)readDirPath:(NSString *)path __attribute__((swift_name("readDir(path:)")));
- (NSString * _Nullable)readFilePathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("readFile(pathComponent:encoding:)")));
- (NSString * _Nullable)readFilePath:(NSString *)path encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("readFile(path:encoding:)")));
- (Khtf_iosapp_fwStatResult * _Nullable)statPathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent __attribute__((swift_name("stat(pathComponent:)")));
- (Khtf_iosapp_fwStatResult * _Nullable)statPath:(NSString *)path __attribute__((swift_name("stat(path:)")));
- (BOOL)touchPathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent __attribute__((swift_name("touch(pathComponent:)")));
- (BOOL)touchPath:(NSString *)path __attribute__((swift_name("touch(path:)")));
- (BOOL)unlinkPathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent __attribute__((swift_name("unlink(pathComponent:)")));
- (BOOL)unlinkPath:(NSString *)path __attribute__((swift_name("unlink(path:)")));
- (BOOL)writeFilePathComponent:(Khtf_iosapp_fwPathComponent *)pathComponent contents:(NSString *)contents create:(BOOL)create encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("writeFile(pathComponent:contents:create:encoding:)")));
- (BOOL)writeFilePath:(NSString *)path contents:(NSString *)contents create:(BOOL)create encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("writeFile(path:contents:create:encoding:)")));
@property (readonly) Khtf_iosapp_fwPath *cachesDirectory __attribute__((swift_name("cachesDirectory")));
@property (readonly) Khtf_iosapp_fwPath *contentsDirectory __attribute__((swift_name("contentsDirectory")));
@property (readonly) Khtf_iosapp_fwPath *temporaryDirectory __attribute__((swift_name("temporaryDirectory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileType")))
@interface Khtf_iosapp_fwFileType : Khtf_iosapp_fwKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Khtf_iosapp_fwFileType *regular __attribute__((swift_name("regular")));
@property (class, readonly) Khtf_iosapp_fwFileType *directory __attribute__((swift_name("directory")));
@property (class, readonly) Khtf_iosapp_fwFileType *unknown __attribute__((swift_name("unknown")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Khtf_iosapp_fwFileType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Path")))
@interface Khtf_iosapp_fwPath : KotlinBase
- (instancetype)initWithAbsolutePath:(NSString * _Nullable)absolutePath relativePath:(NSString * _Nullable)relativePath __attribute__((swift_name("init(absolutePath:relativePath:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property Khtf_iosapp_fwPathComponent * _Nullable absolutePath __attribute__((swift_name("absolutePath")));
@property Khtf_iosapp_fwPathComponent * _Nullable relativePath __attribute__((swift_name("relativePath")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Path.Companion")))
@interface Khtf_iosapp_fwPathCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (Khtf_iosapp_fwPath *)fromUrlUrl:(NSURL * _Nullable)url __attribute__((swift_name("fromUrl(url:)")));
- (Khtf_iosapp_fwPath *)fromUrlStringUrlString:(NSString *)urlString __attribute__((swift_name("fromUrlString(urlString:)")));
- (Khtf_iosapp_fwPath *)simplifiedPath:(NSString *)path __attribute__((swift_name("simplified(path:)")));
- (NSURL * _Nullable)urlFromStringUrlString:(NSString * _Nullable)urlString __attribute__((swift_name("urlFromString(urlString:)")));
@property (readonly) Khtf_iosapp_fwPath *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathComponent")))
@interface Khtf_iosapp_fwPathComponent : KotlinBase
- (instancetype)initWithComponent:(NSString * _Nullable)component __attribute__((swift_name("init(component:)"))) __attribute__((objc_designated_initializer));
- (Khtf_iosapp_fwPathComponent * _Nullable)byAppendingComponent:(NSString *)component __attribute__((swift_name("byAppending(component:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable component __attribute__((swift_name("component")));
@property (readonly) NSURL * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatResult")))
@interface Khtf_iosapp_fwStatResult : KotlinBase
- (instancetype)initWithName:(NSString *)name absolutePath:(Khtf_iosapp_fwPathComponent *)absolutePath canonicalPath:(Khtf_iosapp_fwPathComponent *)canonicalPath createdAt:(Khtf_iosapp_fwDouble * _Nullable)createdAt modifiedAt:(Khtf_iosapp_fwDouble * _Nullable)modifiedAt size:(Khtf_iosapp_fwDouble * _Nullable)size type:(Khtf_iosapp_fwFileType *)type __attribute__((swift_name("init(name:absolutePath:canonicalPath:createdAt:modifiedAt:size:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Khtf_iosapp_fwPathComponent *)component2 __attribute__((swift_name("component2()")));
- (Khtf_iosapp_fwPathComponent *)component3 __attribute__((swift_name("component3()")));
- (Khtf_iosapp_fwDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (Khtf_iosapp_fwDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (Khtf_iosapp_fwDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (Khtf_iosapp_fwFileType *)component7 __attribute__((swift_name("component7()")));
- (Khtf_iosapp_fwStatResult *)doCopyName:(NSString *)name absolutePath:(Khtf_iosapp_fwPathComponent *)absolutePath canonicalPath:(Khtf_iosapp_fwPathComponent *)canonicalPath createdAt:(Khtf_iosapp_fwDouble * _Nullable)createdAt modifiedAt:(Khtf_iosapp_fwDouble * _Nullable)modifiedAt size:(Khtf_iosapp_fwDouble * _Nullable)size type:(Khtf_iosapp_fwFileType *)type __attribute__((swift_name("doCopy(name:absolutePath:canonicalPath:createdAt:modifiedAt:size:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Khtf_iosapp_fwPathComponent *absolutePath __attribute__((swift_name("absolutePath")));
@property (readonly) Khtf_iosapp_fwPathComponent *canonicalPath __attribute__((swift_name("canonicalPath")));
@property (readonly) Khtf_iosapp_fwDouble * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) Khtf_iosapp_fwDouble * _Nullable modifiedAt __attribute__((swift_name("modifiedAt")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) Khtf_iosapp_fwDouble * _Nullable size __attribute__((swift_name("size")));
@property (readonly) Khtf_iosapp_fwFileType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinString.Companion")))
@interface Khtf_iosapp_fwKotlinStringCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

@interface Khtf_iosapp_fwKotlinStringCompanion (Extensions)
- (NSString * _Nullable)fromDataData:(NSData *)data encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("fromData(data:encoding:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileSystemKt")))
@interface Khtf_iosapp_fwFileSystemKt : KotlinBase
+ (NSString *)nativeStr:(NSString *)receiver __attribute__((swift_name("nativeStr(_:)")));
+ (NSData * _Nullable)toData:(NSString *)receiver encoding:(Khtf_iosapp_fwContentEncoding *)encoding __attribute__((swift_name("toData(_:encoding:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualsKt")))
@interface Khtf_iosapp_fwActualsKt : KotlinBase
+ (int64_t)measureNanoTimeBlock:(void (^)(void))block __attribute__((swift_name("measureNanoTime(block:)")));
+ (int64_t)measureTimeMicrosBlock:(void (^)(void))block __attribute__((swift_name("measureTimeMicros(block:)")));
+ (int64_t)measureTimeMillisBlock:(void (^)(void))block __attribute__((swift_name("measureTimeMillis(block:)")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
