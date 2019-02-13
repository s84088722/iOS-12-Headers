//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AceObject, NSUUID, UIViewController;
@protocol SiriUIViewController;

@interface SiriUITranscriptItem : NSObject
{
    _Bool _restored;
    _Bool _shouldBeExposed;
    _Bool _snippetViewControllerHasBeenUnloaded;
    NSUUID *_itemIdentifier;
    UIViewController<SiriUIViewController> *_viewController;
    AceObject *_aceObject;
    struct CGRect _previousFrame;
}

+ (id)transcriptItemWithAceObject:(id)arg1;
@property(nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property(nonatomic) _Bool snippetViewControllerHasBeenUnloaded; // @synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded;
@property(nonatomic) _Bool shouldBeExposed; // @synthesize shouldBeExposed=_shouldBeExposed;
@property(nonatomic, getter=isRestored) _Bool restored; // @synthesize restored=_restored;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(retain, nonatomic) UIViewController<SiriUIViewController> *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSUUID *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAceObject:(id)arg1;

@end

