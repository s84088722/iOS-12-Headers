//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCDomainsCacheEntry : NSObject
{
    _Bool _subdomainsMatch;
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
}

+ (id)normalizedPatternString:(id)arg1;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool subdomainsMatch; // @synthesize subdomainsMatch=_subdomainsMatch;
- (void).cxx_destruct;
- (id)description;
- (_Bool)matchesURL:(id)arg1;
- (id)initWithPattern:(id)arg1;

@end

