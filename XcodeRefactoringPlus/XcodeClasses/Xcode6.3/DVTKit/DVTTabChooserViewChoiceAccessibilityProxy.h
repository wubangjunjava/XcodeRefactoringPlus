//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTTabChooserViewChoiceAccessibilityProxy : NSObject
{
    DVTChoice *_choice;
    DVTTabChooserView *_tabChooserView;
}

- (void).cxx_destruct;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)initWithChoice:(id)arg1 tabChooserView:(id)arg2;

@end