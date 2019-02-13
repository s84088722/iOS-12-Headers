//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKCSSDeclaration : NSObject
{
    _Bool _important;
    unsigned long long _type;
    NSString *_name;
    NSString *_aliasedName;
    struct _NSRange _range;
    struct _NSRange _nameRange;
    struct _NSRange _valueRange;
}

+ (id)typeString:(unsigned long long)arg1;
@property(nonatomic) struct _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(nonatomic) struct _NSRange nameRange; // @synthesize nameRange=_nameRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property _Bool important; // @synthesize important=_important;
@property(retain, nonatomic) NSString *aliasedName; // @synthesize aliasedName=_aliasedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *stringValue;

@end

