//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView
{
    CAPackage *_package;
    NSArray *_rootViews;
}

+ (id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)_shouldCatchDecodingExceptions;
- (void).cxx_destruct;
- (id)publishedViewWithName:(id)arg1;
- (id)publishedObjectWithName:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;

@end

