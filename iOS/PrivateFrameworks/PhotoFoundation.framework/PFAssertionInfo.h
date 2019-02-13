//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PFAssertionInfo : NSObject
{
    _Bool _isClassMethod;
    _Bool _isFatal;
    SEL _selector;
    Class _objectClass;
    NSString *_functionName;
    NSString *_fileName;
    unsigned long long _lineNumber;
    NSString *_message;
    NSArray *_backtrace;
}

@property _Bool isFatal; // @synthesize isFatal=_isFatal;
@property(retain) NSArray *backtrace; // @synthesize backtrace=_backtrace;
@property(retain) NSString *message; // @synthesize message=_message;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSString *functionName; // @synthesize functionName=_functionName;
@property _Bool isClassMethod; // @synthesize isClassMethod=_isClassMethod;
@property(retain) Class objectClass; // @synthesize objectClass=_objectClass;
@property SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (_Bool)isWarning;
- (id)description;
- (id)prettyMethodName;

@end

