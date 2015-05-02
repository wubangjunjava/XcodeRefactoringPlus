//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSliderInspector : IBBoundControlInspector
{
    NSTextField *tickMarkCountTextField;
    NSTextField *maxTextField;
    NSTextField *minTextField;
    NSTextField *currentTextField;
    NSStepper *tickMarkCountStepper;
    NSStepper *maxStepper;
    NSStepper *minStepper;
    NSStepper *currentStepper;
    NSPopUpButton *typePopUp;
    NSPopUpButton *tickMarkLocationPopUp;
    NSButton *onlyStopOnMarksCheckBox;
}

- (void)awakeFromNib;

@end