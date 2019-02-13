//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIColor, UIScreen, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying>
{
    _Bool _isDark;
    UITraitCollection *_traitCollection;
    UIScreen *_screen;
    UIColor *_tintColor;
}

@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (_Bool)_stateEqualToVisualStyleViewState:(id)arg1;
- (void)_collectStateFromVisualStyleViewState:(id)arg1;
- (void)_collectStateFromScreen:(id)arg1;
- (void)_collectStateFromView:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyWithScreen:(id)arg1;
- (id)copyWithTraitCollection:(id)arg1;
- (id)initWithPropertiesFromTopLevelView:(id)arg1;
- (id)init;

@end

