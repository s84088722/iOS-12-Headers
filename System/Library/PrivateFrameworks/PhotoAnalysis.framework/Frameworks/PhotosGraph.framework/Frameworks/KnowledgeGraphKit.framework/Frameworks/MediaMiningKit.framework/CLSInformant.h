//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSInformant : NSObject
{
    NSString *_uuid;
}

+ (id)supportedOutputClueKeys;
+ (id)informantDependenciesIdentifiers;
+ (id)identifier;
+ (id)classIdentifier;
+ (id)familyIdentifier;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)uniqueIdentifier;
- (id)init;

@end
