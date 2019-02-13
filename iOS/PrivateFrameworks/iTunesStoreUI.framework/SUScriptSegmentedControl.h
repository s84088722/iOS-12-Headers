//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUSegmentedControl, SUStorePageViewController;

@interface SUScriptSegmentedControl : SUScriptObject
{
    NSArray *_segments;
    long long _style;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setRawSegments:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3;
- (long long)_sectionsStyleForString:(id)arg1;
- (void)_reloadViewControllerPageSectionGroup;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newNativeSegmentedControl;
@property(readonly, nonatomic) SUStorePageViewController *storePageViewController;
@property(readonly, nonatomic) NSArray *rawSegments;
@property(readonly, nonatomic) SUSegmentedControl *activeSegmentedControl;
@property(readonly) long long tintStyleDefault;
@property(readonly) long long tintStyleDark;
@property(readonly) NSNumber *noSegmentIndex;
@property(readonly) unsigned long long controlStateSelected;
@property(readonly) unsigned long long controlStateNormal;
@property(readonly) unsigned long long controlStateHighlighted;
@property(readonly) unsigned long long controlStateDisabled;
@property long long tintStyle;
@property(copy) id tintColor;
@property(retain) NSString *style;
@property(copy) id showsMoreListAutomatically;
@property(retain) NSNumber *selectedIndex;
@property(retain) id segments;
@property(copy) NSString *moreListTitle;
@property double maximumWidth;
@property long long maximumNumberOfItems;
@property(copy) NSString *cancelButtonTitle;
@property(readonly) NSNumber *selectedSegmentIndex;
- (id)_className;
- (id)titleShadowColorForControlState:(unsigned long long)arg1;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)showMoreListAnimated:(_Bool)arg1;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)hideMoreListAnimated:(_Bool)arg1;
@property(retain, nonatomic) SUSegmentedControl *nativeSegmentedControl;
- (id)newPageSectionGroup;
@property(readonly, nonatomic) long long nativeSelectedIndex;
- (void)dealloc;
- (id)initWithPageSectionGroup:(id)arg1;

@end

