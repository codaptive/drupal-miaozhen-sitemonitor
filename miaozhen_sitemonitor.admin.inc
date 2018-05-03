<?php

/**
 * @file
 * TODO: Enter file description here.
 */

/**
 * Form builder.
 */
function miaozhen_sitemonitor_settings_form($form, &$form_state)
{
    $form['miaozhen_sitemonitor_event_tracking_code'] = [
        '#type' => 'textarea',
        '#title' => t('Event Tracking Code'),
        '#rows' => 30,
        '#default_value' => variable_get('miaozhen_sitemonitor_event_tracking_code', ''),
    ];

    return system_settings_form($form);
}