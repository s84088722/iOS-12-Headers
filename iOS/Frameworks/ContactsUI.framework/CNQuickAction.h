//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStyle, CNQuickActionsManager, NSString, UIColor, UIImage, UIView;

@interface CNQuickAction : NSObject
{
    _Bool _useDuetIfAvailable;
    _Bool _isLongPress;
    _Bool _enabled;
    _Bool _cached;
    _Bool _dismissesWithAnimation;
    NSString *_title;
    NSString *_category;
    UIColor *_imageTintColor;
    CNQuickActionsManager *_manager;
    NSString *_identifier;
    UIImage *_image;
    UIView *_sourceView;
    unsigned long long _score;
    CDUnknownBlockType _performBlock;
    CNContactStyle *_previousStyle;
}

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)defaultTitleForActionInCategory:(id)arg1 context:(long long)arg2;
+ (id)possibleTitlesForActionsInCategories:(id)arg1 context:(long long)arg2;
+ (_Bool)reallyPerform;
@property(retain, nonatomic) CNContactStyle *previousStyle; // @synthesize previousStyle=_previousStyle;
@property(copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
@property(nonatomic) unsigned long long score; // @synthesize score=_score;
@property(nonatomic) _Bool dismissesWithAnimation; // @synthesize dismissesWithAnimation=_dismissesWithAnimation;
@property(nonatomic) _Bool cached; // @synthesize cached=_cached;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak CNQuickActionsManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(nonatomic) _Bool isLongPress; // @synthesize isLongPress=_isLongPress;
@property(nonatomic) _Bool useDuetIfAvailable; // @synthesize useDuetIfAvailable=_useDuetIfAvailable;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)cancel;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)perform;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;
- (id)defaultTitleForContext:(long long)arg1;
- (id)coloredImage;
- (id)imageForContext:(long long)arg1;
@property(readonly, nonatomic) NSString *globalIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
@property(nonatomic, getter=isBackAction) _Bool backAction;
- (id)userActionType;

@end

