//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TSUExtendedAttribute : NSObject <NSCopying>
{
    NSString *_name;
    NSData *_value;
}

+ (id)extendedAttributeFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;
+ (id)extendedAttributeWithName:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)setAttributeToPathFileSystemRepresentation:(const char *)arg1 options:(int)arg2 error:(id *)arg3;
- (_Bool)setAttributeToPath:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (_Bool)shouldPreserveForIntent:(unsigned int)arg1;
- (id)initFromPathFileSystemRepresentation:(const char *)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (id)initFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)init;

@end

