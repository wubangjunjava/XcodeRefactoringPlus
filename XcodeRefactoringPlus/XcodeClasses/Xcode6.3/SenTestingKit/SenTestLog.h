//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SenTestLog : SenTestObserver
{
}

+ (void)testCaseDidFail:(id)arg1;
+ (void)testSuiteDidStop:(id)arg1;
+ (void)testSuiteDidStart:(id)arg1;
+ (void)testCaseDidStop:(id)arg1;
+ (void)testCaseDidStart:(id)arg1;
+ (void)testLogWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)testLogWithFormat:(id)arg1;

@end