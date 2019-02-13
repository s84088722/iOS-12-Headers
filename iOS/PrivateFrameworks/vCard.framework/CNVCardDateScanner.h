//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNVCardDateScanner : NSObject
{
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)arg1;
@property(readonly) unsigned long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (unsigned short)nextCharacter;
- (_Bool)isAtEnd;
- (_Bool)scanLeapMarker;
- (unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1;
- (long long)scanCalendarUnit:(unsigned long long)arg1;
- (long long)scanComponentValueOfLength:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;

@end

