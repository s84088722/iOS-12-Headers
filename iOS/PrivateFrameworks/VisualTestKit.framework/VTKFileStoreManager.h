//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKStoreManager-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VTKFileStoreManager : NSObject <VTKStoreManager>
{
    NSString *_itemsDirectory;
    NSURL *_saveItemsRootURL;
}

@property(readonly, nonatomic) NSURL *saveItemsRootURL; // @synthesize saveItemsRootURL=_saveItemsRootURL;
@property(copy, nonatomic) NSString *itemsDirectory; // @synthesize itemsDirectory=_itemsDirectory;
- (void).cxx_destruct;
- (id)saveItems:(id)arg1 withID:(id)arg2 testCase:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

