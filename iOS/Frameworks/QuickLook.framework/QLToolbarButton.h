//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSArray, NSString, QLToolbarButtonItemRepresentation, QLToolbarUnderlyingButton, UIAlertController, UIImage;

@interface QLToolbarButton : NSObject <NSSecureCoding>
{
    QLToolbarButtonItemRepresentation *_currentItemRepresentation;
    UIAlertController *_alertController;
    id _target;
    QLToolbarUnderlyingButton *_underlyingButton;
    SEL _action;
    _Bool _forceToNavBar;
    _Bool _selected;
    _Bool _enabled;
    _Bool _roundedSelectedIndicator;
    NSString *_identifier;
    UIImage *_image;
    long long _systemItem;
    NSString *_title;
    NSString *_accessibilityIdentifier;
    NSArray *_options;
    unsigned long long _placement;
}

+ (_Bool)supportsSecureCoding;
@property _Bool roundedSelectedIndicator; // @synthesize roundedSelectedIndicator=_roundedSelectedIndicator;
@property _Bool enabled; // @synthesize enabled=_enabled;
@property _Bool selected; // @synthesize selected=_selected;
@property _Bool forceToNavBar; // @synthesize forceToNavBar=_forceToNavBar;
@property unsigned long long placement; // @synthesize placement=_placement;
@property(copy) NSArray *options; // @synthesize options=_options;
@property(copy) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy) NSString *title; // @synthesize title=_title;
@property long long systemItem; // @synthesize systemItem=_systemItem;
@property(copy) UIImage *image; // @synthesize image=_image;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)invalidateCurrentState;
- (void)handleLongPress:(id)arg1;
- (id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(struct CGSize)arg3;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

