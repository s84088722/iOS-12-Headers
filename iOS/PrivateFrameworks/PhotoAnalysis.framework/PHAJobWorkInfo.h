//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHAJobWorkInfo : NSObject
{
    int _workerFlags;
    NSString *_assetLocalIdentifier;
}

@property(nonatomic) int workerFlags; // @synthesize workerFlags=_workerFlags;
@property(readonly, copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
- (void).cxx_destruct;
- (id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2;

@end

