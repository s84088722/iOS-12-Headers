//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface VOSVoiceOverCommandHelp : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_locKeyForGesture:(id)arg1 isRTL:(_Bool)arg2;
- (id)_locKeyForCommand:(id)arg1 isRTL:(_Bool)arg2;
- (id)_locKeyForHandwriting:(id)arg1 isRTL:(_Bool)arg2;
- (_Bool)_isRTLCheckRequiredForCommand:(id)arg1 helpType:(long long)arg2;
- (id)helpSections;
- (id)helpTextForCommand:(id)arg1 helpType:(long long)arg2 rtlCheck:(CDUnknownBlockType)arg3;
- (id)helpTextForCommand:(id)arg1 helpType:(long long)arg2;
- (id)helpTextForLocKey:(id)arg1;
- (id)init;

@end

