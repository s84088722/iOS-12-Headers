//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PHFaceprint : NSObject
{
    long long _faceprintVersion;
    NSData *_faceprintData;
}

@property(readonly, retain, nonatomic) NSData *faceprintData; // @synthesize faceprintData=_faceprintData;
@property(readonly, nonatomic) long long faceprintVersion; // @synthesize faceprintVersion=_faceprintVersion;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2;

@end

