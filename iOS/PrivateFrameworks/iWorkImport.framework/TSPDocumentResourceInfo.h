//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSSet, NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceInfo : NSObject <NSCopying>
{
    NSString *_digestString;
    NSString *_locator;
    NSString *_fileExtension;
    unsigned long long _fileSize;
    NSSet *_tags;
    TSUColor *_fallbackColor;
}

@property(readonly, copy, nonatomic) TSUColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;
@property(readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, copy, nonatomic) NSString *locator; // @synthesize locator=_locator;
@property(readonly, copy, nonatomic) NSString *digestString; // @synthesize digestString=_digestString;
- (void).cxx_destruct;
- (_Bool)isEqualToDocumentResourceInfo:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2 fileExtension:(id)arg3 fileSize:(unsigned long long)arg4 tags:(id)arg5 fallbackColor:(id)arg6;
- (id)init;

@end

