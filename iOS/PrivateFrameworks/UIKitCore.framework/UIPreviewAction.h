//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIPreviewActionItem-Protocol.h>
#import <UIKitCore/UIPreviewActionItem_Internal-Protocol.h>

@class NSString, UIColor, UIImage;

@interface UIPreviewAction : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem>
{
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;
    UIColor *_color;
    long long _style;
    CDUnknownBlockType _handler;
}

+ (id)_actionWithPreviewMenuItem:(id)arg1;
+ (id)_checkmarkImage;
+ (id)_actionWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 image:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_actionWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_effectiveImage;
- (id)_effectiveColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

