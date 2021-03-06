<?php
/**
 * @file
 * challenges.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function challenges_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-challenges_archived'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'challenges_archived',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges/archived',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'gdstheme',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-challenges_completed'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'challenges_completed',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges/adopted',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-challenges_landing_page_text'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'challenges_landing_page_text',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-challenges_suggested'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'challenges_suggested',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges/suggested',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-challenges_under_evaluation'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'challenges_under_evaluation',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges/evaluation',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-stages_selection_process'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'stages_selection_process',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges
challenges/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'gdstheme',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['quicktabs-test'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'test',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'challenge/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['site-suggest_challenge'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'suggest_challenge',
    'module' => 'site',
    'node_types' => array(),
    'pages' => 'challenges*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gdstheme',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-challenge_comments-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'challenge_comments-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-challenge_proposals-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'challenge_proposals-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-my_challenges-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'my_challenges-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'track-progress
monitor-progress',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gdstheme',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-my_challenges-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'my_challenges-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'track-progress
monitor-progress',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gdstheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gdstheme',
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
