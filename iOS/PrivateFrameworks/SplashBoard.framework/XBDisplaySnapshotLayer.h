//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XBDisplaySnapshotLayer : NSObject
{
    unsigned int _contextID;
    struct CATransform3D _baseTransform;
}

+ (id)layerWithContextID:(unsigned int)arg1 baseTransform:(struct CATransform3D)arg2;
@property(nonatomic) struct CATransform3D baseTransform; // @synthesize baseTransform=_baseTransform;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (id)initWithContextID:(unsigned int)arg1 baseTransform:(struct CATransform3D)arg2;

@end

