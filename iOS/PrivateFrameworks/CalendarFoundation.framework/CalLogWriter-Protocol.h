//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarFoundation/NSObject-Protocol.h>

@class CalLogEnvelope, NSDictionary;
@protocol CalLogFormatter;

@protocol CalLogWriter <NSObject>
@property(retain, nonatomic) id <CalLogFormatter> formatter;
- (_Bool)flush;
- (void)write:(CalLogEnvelope *)arg1;
- (id)initWithParameters:(NSDictionary *)arg1;
@end

