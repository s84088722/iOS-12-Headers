//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUDynamicScrollingOptions : NSObject
{
    long long _viewSizeSubclass;
    CDStruct_d6c048b4 _textScaleSetting;
}

+ (id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(_Bool)arg2;
@property(nonatomic) CDStruct_d6c048b4 textScaleSetting; // @synthesize textScaleSetting=_textScaleSetting;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end

