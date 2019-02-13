//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSPContainerObserver-Protocol.h"

@class MSPContainer, NSArray, NSString, StorageDebugDataSource;

__attribute__((visibility("hidden")))
@interface StorageDebugCollection : NSObject <MSPContainerObserver>
{
    MSPContainer *_container;
    StorageDebugDataSource *_owner;
    CDUnknownBlockType _descriptionHandler;
    NSString *_title;
    NSArray *_elements;
}

@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)select;
- (void)_update;
- (void)_didSelectElement:(id)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 title:(id)arg2 contentsDescriptionHandler:(CDUnknownBlockType)arg3 owner:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

