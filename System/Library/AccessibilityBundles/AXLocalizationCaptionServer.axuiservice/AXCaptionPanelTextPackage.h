//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXCaptionPanelTextPackage : NSObject
{
    NSString *_text;
    NSString *_bundle;
    NSString *_file;
    NSString *_key;
    NSString *_englishText;
    NSString *_appName;
}

@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *englishText; // @synthesize englishText=_englishText;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)fileLogDescription;

@end

