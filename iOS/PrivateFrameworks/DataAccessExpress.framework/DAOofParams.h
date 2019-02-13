//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface DAOofParams : NSObject
{
    int _oofState;
    int _externalState;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_message;
    NSString *_externalMessage;
}

@property(retain, nonatomic) NSString *externalMessage; // @synthesize externalMessage=_externalMessage;
@property(nonatomic) int externalState; // @synthesize externalState=_externalState;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int oofState; // @synthesize oofState=_oofState;
- (void).cxx_destruct;
- (void)enableOof:(_Bool)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4;
- (_Bool)isEnabled;
- (id)dictionaryRepresentationForASSettingTask;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

