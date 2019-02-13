//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject
{
    PFCanceler *_canceler;
    unsigned char _type;
    unsigned char _priority;
    unsigned long long _longestSide;
    CDUnknownBlockType _cancelBlock;
    PHImportAsset *_asset;
    CDUnknownBlockType _completionHandler;
}

+ (id)stringForRequestType:(unsigned char)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PHImportAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(readonly, nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long longestSide; // @synthesize longestSide=_longestSide;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isCanceled;
- (void)cancel;
@property(readonly, nonatomic) PHImportAsset *requestAsset;
- (id)init;
- (id)initWithAsset:(id)arg1 type:(unsigned char)arg2 longestSide:(unsigned long long)arg3 priority:(unsigned char)arg4;

@end

