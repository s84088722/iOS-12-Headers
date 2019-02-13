//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNActionViewTemplateImage;

@interface CNActionItem : NSObject
{
    _Bool _disabled;
    NSString *_type;
    NSString *_title;
    id <CNActionViewTemplateImage> _templateImage;
}

+ (id)actionItemWithTemplateImage:(id)arg1 type:(id)arg2;
+ (id)actionItemWithImage:(id)arg1 type:(id)arg2;
@property(readonly, nonatomic) id <CNActionViewTemplateImage> templateImage; // @synthesize templateImage=_templateImage;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTemplateImage:(id)arg1 type:(id)arg2;

@end

