//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/NSCopying-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OKActionResponder;

@interface OKActionBindingProxy : NSObject <UIGestureRecognizerDelegate, OKSettingsSupport, NSCopying>
{
    NSString *_name;
    NSString *_actionScript;
    NSMutableArray *_shouldRecognizeSimultaneously;
    _Bool _alwaysRecognizeSimultaneously;
    NSMutableArray *_requireToFail;
    id _target;
    SEL _selector;
    id <OKActionResponder> _actionResponder;
    long long _tag;
    _Bool _canBeTriggeredWithoutInteractivity;
    unsigned long long _scope;
}

+ (id)actionBindingWithGestureRecognizer:(id)arg1 fromActionResponder:(id)arg2;
+ (id)supportedSettings;
+ (id)actionBinding;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) _Bool canBeTriggeredWithoutInteractivity; // @synthesize canBeTriggeredWithoutInteractivity=_canBeTriggeredWithoutInteractivity;
@property(copy, nonatomic) NSArray *requireToFail; // @synthesize requireToFail=_requireToFail;
@property(nonatomic) _Bool alwaysRecognizeSimultaneously; // @synthesize alwaysRecognizeSimultaneously=_alwaysRecognizeSimultaneously;
@property(copy, nonatomic) NSArray *shouldRecognizeSimultaneously; // @synthesize shouldRecognizeSimultaneously=_shouldRecognizeSimultaneously;
@property(copy, nonatomic) NSString *actionScript; // @synthesize actionScript=_actionScript;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (struct CGPoint)locationForActionFromGesture:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (_Bool)performAction:(id)arg1;
- (void)prepareAction:(id)arg1;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)unload;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
@property(readonly) id <OKActionResponder> actionResponder; // @synthesize actionResponder=_actionResponder;
@property(nonatomic) id target; // @synthesize target=_target;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

