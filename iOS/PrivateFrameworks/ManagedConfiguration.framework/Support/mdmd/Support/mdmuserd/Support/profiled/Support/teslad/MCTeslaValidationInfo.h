//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MCTeslaValidationInfo : NSObject
{
    _Bool _isRequired;
    NSString *_name;
    NSDictionary *_validationInfo;
}

@property(retain, nonatomic) NSDictionary *validationInfo; // @synthesize validationInfo=_validationInfo;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;
- (_Bool)validateSelfWithDictionary:(id)arg1 resultsDictionary:(id)arg2;
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;

@end

