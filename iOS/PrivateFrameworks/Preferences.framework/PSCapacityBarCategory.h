//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject <NSCopying>
{
    unsigned long long _bytes;
    NSString *_identifier;
    NSString *_title;
    UIColor *_color;
}

@property(retain) UIColor *color; // @synthesize color=_color;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long bytes; // @synthesize bytes=_bytes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4;

@end

