//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MMCTTextViewSession : NSObject
{
    BOOL _activated;
    NSArray *_lines;
    NSArray *_lineOrigins;
    struct CGPoint _startPosition;
    struct CGPoint _endPosition;
}

@property(nonatomic) struct CGPoint endPosition; // @synthesize endPosition=_endPosition;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(retain, nonatomic) NSArray *lineOrigins; // @synthesize lineOrigins=_lineOrigins;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
- (struct _NSRange)selectedRange;
- (long long)stringIndexForPosition:(struct CGPoint)arg1;
- (void)endSession;
- (void)beginSession;

@end

