//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDWPTextLabel, NSString;

__attribute__((visibility("hidden")))
@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable>
{
    int mType;
    GQDWPTextLabel *mLabel;
}

+ (const struct StateSpec *)stateForReading;
- (id)label;
- (int)type;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

