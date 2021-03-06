//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserController;
@protocol UICoordinateSpace;

@interface BrowserWindowSourceInfo : NSObject
{
    BrowserController *_browserController;
    id <UICoordinateSpace> _coordinateSpace;
    struct CGRect _frame;
}

+ (id)sourceInfoWithBrowserController:(id)arg1 frame:(struct CGRect)arg2 coordinateSpace:(id)arg3;
+ (id)sourceInfoWithBrowserController:(id)arg1;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) BrowserController *browserController; // @synthesize browserController=_browserController;
- (void).cxx_destruct;
- (id)_initWithBrowserController:(id)arg1 frame:(struct CGRect)arg2 coordinateSpace:(id)arg3;

@end

