//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDENavigatorTrayHeaderCell : IDENavigatorProcessCell <IDENavigatorTrayHeaderCellProtocol>
{
    NSButtonCell *_gaugeCell;
    NSImage *_gaugeIcon;
    NSImage *_loweredGaugeImage;
    int _trayState;
}

- (void).cxx_destruct;
- (BOOL)_mouseLocationForEventOverGaugeButton:(id)arg1 cellFrame:(struct CGRect)arg2 view:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_drawLineBelowTrayCellRect:(struct CGRect)arg1;
- (void)_drawInteriorHeaderBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 height:(double)arg3;
- (id)_gaugeButtonIcon;
- (void)_gaugeButtonPressed:(id)arg1;
- (void)_drawGaugeIconWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)gaugeIconRectInFrame:(struct CGRect)arg1;
- (void)setTrayState:(int)arg1;
- (id)representedObjectFollowingProxyLink;
- (struct CGRect)visualHeaderRectInBounds:(struct CGRect)arg1;
- (struct CGRect)dvt_frameOfOutlineCellForBounds:(struct CGRect)arg1 proposedFrame:(struct CGRect)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)statusCellsRectsForBounds:(struct CGRect)arg1;
- (struct CGRect)statusRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end