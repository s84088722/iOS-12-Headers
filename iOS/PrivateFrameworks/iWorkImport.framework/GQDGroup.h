//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDDrawable.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDWPExternalTextWrap, NSString;

__attribute__((visibility("hidden")))
@interface GQDGroup : GQDDrawable <GQDNameMappable>
{
    struct __CFArray *mDrawables;
    GQDWPExternalTextWrap *mExternalTextWrap;
}

+ (const struct StateSpec *)stateForReading;
- (id)externalTextWrap;
- (struct __CFArray *)drawables;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

