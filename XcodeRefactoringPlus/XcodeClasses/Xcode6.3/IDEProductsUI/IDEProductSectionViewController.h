//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProductSectionViewController : IDEViewController <IDEProductsInspectableVending>
{
    BOOL _busy;
    BOOL _empty;
    DVTProduct *_selectedProduct;
    IDEProductsViewController *_productsViewController;
    NSString *_busyReason;
    id <IDEProductsInspectable> _currentInspectable;
}

+ (BOOL)canShowContentForProduct:(id)arg1;
@property(readonly, nonatomic) BOOL empty; // @synthesize empty=_empty;
@property(retain) id <IDEProductsInspectable> currentInspectable; // @synthesize currentInspectable=_currentInspectable;
@property(readonly, nonatomic) NSString *busyReason; // @synthesize busyReason=_busyReason;
@property(readonly, nonatomic) BOOL busy; // @synthesize busy=_busy;
@property __weak IDEProductsViewController *productsViewController; // @synthesize productsViewController=_productsViewController;
@property(retain, nonatomic) DVTProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
- (void).cxx_destruct;
@property(readonly) BOOL shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)refresh;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end