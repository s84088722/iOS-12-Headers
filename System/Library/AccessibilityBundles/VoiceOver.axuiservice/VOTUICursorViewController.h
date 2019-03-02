//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class VOTUICursorView;
@protocol AXUIService;

@interface VOTUICursorViewController : UIViewController
{
    id <AXUIService> _axuiService;
    VOTUICursorView *_cursorView;
    struct CGPath *_cursorPath;
    struct CGRect _cursorFrame;
}

@property(retain, nonatomic) struct CGPath *cursorPath; // @synthesize cursorPath=_cursorPath;
@property(nonatomic) struct CGRect cursorFrame; // @synthesize cursorFrame=_cursorFrame;
@property(retain, nonatomic) VOTUICursorView *cursorView; // @synthesize cursorView=_cursorView;
@property(nonatomic) __weak id <AXUIService> axuiService; // @synthesize axuiService=_axuiService;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(nonatomic) _Bool cursorHidden;
- (void)_updateCursorPath;
- (struct CGRect)convertFrameToCursorSpace:(struct CGRect)arg1;
- (void)_updateCursorFrameAnimated:(_Bool)arg1;
- (void)setCursorFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithAXUIService:(id)arg1;

@end
