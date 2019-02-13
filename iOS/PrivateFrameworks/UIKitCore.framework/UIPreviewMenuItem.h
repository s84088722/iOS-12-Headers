//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString, UIColor, UIImage;

@interface UIPreviewMenuItem : NSObject <NSCopying>
{
    NSString *identifier;
    NSString *_title;
    CDUnknownBlockType _handler;
    long long _style;
    NSArray *__subitems;
    UIImage *_image;
    UIColor *_color;
}

+ (id)itemWithViewControllerPreviewAction:(id)arg1;
+ (id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3;
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic, getter=_subitems, setter=_setSubitems:) NSArray *_subitems; // @synthesize _subitems=__subitems;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

