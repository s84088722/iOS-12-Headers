//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationship : NSObject
{
    NSString *mIdentifier;
    NSString *mType;
    int mTargetMode;
    NSURL *mTargetLocation;
}

- (id)targetLocation;
- (int)targetMode;
- (id)type;
- (id)identifier;
- (void)dealloc;
- (id)initWithXmlElement:(struct _xmlNode *)arg1 baseLocation:(id)arg2;
- (void)readFromElement:(struct _xmlNode *)arg1 baseLocation:(id)arg2;

@end

